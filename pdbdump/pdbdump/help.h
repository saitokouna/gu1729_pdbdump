wprintf(L"NAME\n");
wprintf(L"       pdbdump - dump content of PDB files (program databases)\n");
wprintf(L"\n");
wprintf(L"SYNOPSIS\n");
wprintf(L"       pdbdump.exe [OPTION]... [FILTER]... [pdb-file]...\n");
wprintf(L"\n");
wprintf(L"DESCRIPTION\n");
wprintf(L"       pdbdump is a tool for dumping the content of PDB files to stdout.\n");
wprintf(L"\n");
wprintf(L"       PDB files (program databases) are produced by Microsoft Visual Studio\n");
wprintf(L"       during the build of a project, for example C++ projects. They hold\n");
wprintf(L"       debugging information, such as the user-defined types, enumerations,\n");
wprintf(L"       functions etc.\n");
wprintf(L"\n");
wprintf(L"       pdbdump outputs these information in JSON, XML or SQLite3. This allows\n");
wprintf(L"       for further processing, such as static code analysis. For example, one\n");
wprintf(L"       may track the growth of the size of some critical structs over time,\n");
wprintf(L"       check packing of structs, generate some documentation etc.\n");
wprintf(L"\n");
wprintf(L"       Hint: the pdbdump tool only works on PDB files that have been\n");
wprintf(L"       generated using the linker option `/DEBUG:FULL`.\n");
wprintf(L"\n");
wprintf(L"OPTIONS\n");
wprintf(L"\n");
wprintf(L"       --help        show this help\n");
wprintf(L"       --version     show version number\n");
wprintf(L"       --list        list all supported properties\n");
wprintf(L"       --json        output JSON, default\n");
wprintf(L"       --xml         output XML\n");
wprintf(L"       --sqlite3     output SQLite3, including table generation\n");
wprintf(L"       --csv         output CSV\n");
wprintf(L"\n");
wprintf(L"FILTER\n");
wprintf(L"       PDB files contain a lot of information, much of which might not be\n");
wprintf(L"       of interest to you. To keep processes fast and output small, you\n");
wprintf(L"       can filter the output according to your needs.\n");
wprintf(L"\n");
wprintf(L"       A filter option is a regular expression starting with either `+`\n");
wprintf(L"       (for adding content) or `-` (for ignoring content).\n");
wprintf(L"       Next follows the tag `symbol::` and then some regex.\n");
wprintf(L"\n");
wprintf(L"       For example, to select the `length` property, use the filter\n");
wprintf(L"\n");
wprintf(L"         +symbol::length\n");
wprintf(L"\n");
wprintf(L"       Select all properties starting with `virtual`\n");
wprintf(L"\n");
wprintf(L"         +symbol::virtual.*\n");
wprintf(L"\n");
wprintf(L"       Discard all properties containing an `e` (for whatever reason)\n");
wprintf(L"\n");
wprintf(L"         -symbol::.*e.*\n");
wprintf(L"\n");
wprintf(L"       Dump all properties for each symbol\n");
wprintf(L"\n");
wprintf(L"         +symbol::.*\n");
wprintf(L"\n");
wprintf(L"       By default, only `name`, `symIndexId` and `symTag` are dumped.\n");
wprintf(L"\n");
wprintf(L"EXAMPLES\n");
wprintf(L"       Dump some minimal information for each symbol in JSON format.\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe test.pdb\n");
wprintf(L"\n");
wprintf(L"       Do the same for multiple files\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe test1.pdb test2.pdb test3.pdb\n");
wprintf(L"\n");
wprintf(L"       Dump to a file\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe test.pdb > test.json\n");
wprintf(L"\n");
wprintf(L"       Dump a lot of information to a file\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe +symbol::.* test.pdb > test.json\n");
wprintf(L"\n");
wprintf(L"       Output in XML format\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe --xml test.pdb\n");
wprintf(L"\n");
wprintf(L"       Output in SQLite3 format\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe --sqlite3 test.pdb\n");
wprintf(L"\n");
wprintf(L"       The SQLite3 option also produces table generation code.\n");
wprintf(L"       Hence, to create and fill a SQLite3 database `test.db`,\n");
wprintf(L"       one simply may\n");
wprintf(L"\n");
wprintf(L"         pdbdump.exe --sqlite3 test.pdb | sqlite3.exe test.db\n");
wprintf(L"\n");
wprintf(L"SEE ALSO\n");
wprintf(L"       For the meaning of the symbols properties etc., consult the\n");
wprintf(L"       documentation of the DIA SDK (Debug Interface Access SDK).\n");
wprintf(L"\n");
wprintf(L"AUTHOR\n");
wprintf(L"       Written by Georg Ulbrich. Contributions by Graham Sutherland.\n");
wprintf(L"\n");
wprintf(L"COPYRIGHT\n");
wprintf(L"       Copyright (C) 2021 by Georg Ulbrich. License MIT.\n");
wprintf(L"\n");
wprintf(L"HOMEPAGE\n");
wprintf(L"       The pdbdump project is hosted at https://github.com/gu1729/pdbdump.\n");
wprintf(L"\n");
