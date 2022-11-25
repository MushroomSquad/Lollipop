
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 68 > 0
static unsigned char *bytecode_data[68];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$cmd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$db(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$diff(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$index(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$index$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$index$fun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$index$typ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$index$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$blob(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$commit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$fun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$submodule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$submodule$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$submodule$root(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$submodule$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$tag(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$tree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$objects$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$head(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$remote(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$symbolic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$refs$tag(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$remote(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$repo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$repo$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$repo$fun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_git$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$const(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$git(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$loose(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$mem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$pack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$db$ref(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$fun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$pack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$stream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$typ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gitdb$utils$encoding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_smmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_smmap$buf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_smmap$mman(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_smmap$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/Projects/Python_Projects/AioGram_Template/Templayter.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/Projects/Python_Projects/AioGram_Template/Templayter.py"
#endif
},
    {"argparse", NULL, 0, 63089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/argparse.py"
#endif
},
    {"asyncio", NULL, 1, 728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/__init__.py"
#endif
},
    {"asyncio.base_events", NULL, 2, 51812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_events.py"
#endif
},
    {"asyncio.base_futures", NULL, 3, 1895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_futures.py"
#endif
},
    {"asyncio.base_subprocess", NULL, 4, 9370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_subprocess.py"
#endif
},
    {"asyncio.base_tasks", NULL, 5, 1965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_tasks.py"
#endif
},
    {"asyncio.constants", NULL, 6, 570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/constants.py"
#endif
},
    {"asyncio.coroutines", NULL, 7, 6605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/coroutines.py"
#endif
},
    {"asyncio.events", NULL, 8, 28405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/events.py"
#endif
},
    {"asyncio.exceptions", NULL, 9, 2452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/exceptions.py"
#endif
},
    {"asyncio.format_helpers", NULL, 10, 2323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/format_helpers.py"
#endif
},
    {"asyncio.futures", NULL, 11, 11871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/futures.py"
#endif
},
    {"asyncio.locks", NULL, 12, 14157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/locks.py"
#endif
},
    {"asyncio.log", NULL, 13, 213, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/log.py"
#endif
},
    {"asyncio.mixins", NULL, 14, 1061, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/mixins.py"
#endif
},
    {"asyncio.protocols", NULL, 15, 8282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/protocols.py"
#endif
},
    {"asyncio.queues", NULL, 16, 8284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/queues.py"
#endif
},
    {"asyncio.runners", NULL, 17, 2076, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/runners.py"
#endif
},
    {"asyncio.selector_events", NULL, 18, 29464, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/selector_events.py"
#endif
},
    {"asyncio.sslproto", NULL, 19, 21938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/sslproto.py"
#endif
},
    {"asyncio.staggered", NULL, 20, 4167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/staggered.py"
#endif
},
    {"asyncio.streams", NULL, 21, 20380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/streams.py"
#endif
},
    {"asyncio.subprocess", NULL, 22, 7046, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/subprocess.py"
#endif
},
    {"asyncio.tasks", NULL, 23, 23957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/tasks.py"
#endif
},
    {"asyncio.threads", NULL, 24, 969, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/threads.py"
#endif
},
    {"asyncio.transports", NULL, 25, 12316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/transports.py"
#endif
},
    {"asyncio.trsock", NULL, 26, 7826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/trsock.py"
#endif
},
    {"asyncio.unix_events", NULL, 27, 41643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/unix_events.py"
#endif
},
    {"concurrent", NULL, 28, 119, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/__init__.py"
#endif
},
    {"concurrent.futures", NULL, 29, 1091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/__init__.py"
#endif
},
    {"concurrent.futures._base", NULL, 30, 22217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/_base.py"
#endif
},
    {"concurrent.futures.process", NULL, 31, 21731, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/process.py"
#endif
},
    {"concurrent.futures.thread", NULL, 32, 5949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/thread.py"
#endif
},
    {"git", modulecode_git, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/__init__.py"
#endif
},
    {"git.cmd", modulecode_git$cmd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/cmd.py"
#endif
},
    {"git.compat", modulecode_git$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/compat.py"
#endif
},
    {"git.config", modulecode_git$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/config.py"
#endif
},
    {"git.db", modulecode_git$db, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/db.py"
#endif
},
    {"git.diff", modulecode_git$diff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/diff.py"
#endif
},
    {"git.exc", modulecode_git$exc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/exc.py"
#endif
},
    {"git.index", modulecode_git$index, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/index/__init__.py"
#endif
},
    {"git.index.base", modulecode_git$index$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/index/base.py"
#endif
},
    {"git.index.fun", modulecode_git$index$fun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/index/fun.py"
#endif
},
    {"git.index.typ", modulecode_git$index$typ, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/index/typ.py"
#endif
},
    {"git.index.util", modulecode_git$index$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/index/util.py"
#endif
},
    {"git.objects", modulecode_git$objects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/__init__.py"
#endif
},
    {"git.objects.base", modulecode_git$objects$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/base.py"
#endif
},
    {"git.objects.blob", modulecode_git$objects$blob, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/blob.py"
#endif
},
    {"git.objects.commit", modulecode_git$objects$commit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/commit.py"
#endif
},
    {"git.objects.fun", modulecode_git$objects$fun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/fun.py"
#endif
},
    {"git.objects.submodule", modulecode_git$objects$submodule, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/submodule/__init__.py"
#endif
},
    {"git.objects.submodule.base", modulecode_git$objects$submodule$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/submodule/base.py"
#endif
},
    {"git.objects.submodule.root", modulecode_git$objects$submodule$root, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/submodule/root.py"
#endif
},
    {"git.objects.submodule.util", modulecode_git$objects$submodule$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/submodule/util.py"
#endif
},
    {"git.objects.tag", modulecode_git$objects$tag, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/tag.py"
#endif
},
    {"git.objects.tree", modulecode_git$objects$tree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/tree.py"
#endif
},
    {"git.objects.util", modulecode_git$objects$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/objects/util.py"
#endif
},
    {"git.refs", modulecode_git$refs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/__init__.py"
#endif
},
    {"git.refs.head", modulecode_git$refs$head, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/head.py"
#endif
},
    {"git.refs.log", modulecode_git$refs$log, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/log.py"
#endif
},
    {"git.refs.reference", modulecode_git$refs$reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/reference.py"
#endif
},
    {"git.refs.remote", modulecode_git$refs$remote, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/remote.py"
#endif
},
    {"git.refs.symbolic", modulecode_git$refs$symbolic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/symbolic.py"
#endif
},
    {"git.refs.tag", modulecode_git$refs$tag, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/refs/tag.py"
#endif
},
    {"git.remote", modulecode_git$remote, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/remote.py"
#endif
},
    {"git.repo", modulecode_git$repo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/repo/__init__.py"
#endif
},
    {"git.repo.base", modulecode_git$repo$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/repo/base.py"
#endif
},
    {"git.repo.fun", modulecode_git$repo$fun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/repo/fun.py"
#endif
},
    {"git.types", modulecode_git$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/types.py"
#endif
},
    {"git.util", modulecode_git$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/git/util.py"
#endif
},
    {"gitdb", modulecode_gitdb, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/__init__.py"
#endif
},
    {"gitdb.base", modulecode_gitdb$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/base.py"
#endif
},
    {"gitdb.const", modulecode_gitdb$const, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/const.py"
#endif
},
    {"gitdb.db", modulecode_gitdb$db, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/__init__.py"
#endif
},
    {"gitdb.db.base", modulecode_gitdb$db$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/base.py"
#endif
},
    {"gitdb.db.git", modulecode_gitdb$db$git, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/git.py"
#endif
},
    {"gitdb.db.loose", modulecode_gitdb$db$loose, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/loose.py"
#endif
},
    {"gitdb.db.mem", modulecode_gitdb$db$mem, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/mem.py"
#endif
},
    {"gitdb.db.pack", modulecode_gitdb$db$pack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/pack.py"
#endif
},
    {"gitdb.db.ref", modulecode_gitdb$db$ref, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/db/ref.py"
#endif
},
    {"gitdb.exc", modulecode_gitdb$exc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/exc.py"
#endif
},
    {"gitdb.fun", modulecode_gitdb$fun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/fun.py"
#endif
},
    {"gitdb.pack", modulecode_gitdb$pack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/pack.py"
#endif
},
    {"gitdb.stream", modulecode_gitdb$stream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/stream.py"
#endif
},
    {"gitdb.typ", modulecode_gitdb$typ, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/typ.py"
#endif
},
    {"gitdb.util", modulecode_gitdb$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/util.py"
#endif
},
    {"gitdb.utils", modulecode_gitdb$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/utils/__init__.py"
#endif
},
    {"gitdb.utils.encoding", modulecode_gitdb$utils$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/gitdb/utils/encoding.py"
#endif
},
    {"multiprocessing", NULL, 33, 653, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/__init__.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/multiprocessing-preLoad.py"
#endif
},
    {"multiprocessing.connection", NULL, 34, 25635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 35, 12838, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 36, 3852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 37, 2552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 38, 8410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 39, 7652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 40, 40746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 41, 25186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 42, 2505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 43, 2450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 44, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 45, 11246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 46, 10269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 47, 8281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 48, 5285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 49, 5506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 50, 14419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 51, 7084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 52, 6721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 53, 11311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 54, 11481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/util.py"
#endif
},
    {"runpy", NULL, 55, 9395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/runpy.py"
#endif
},
    {"site", NULL, 56, 17364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site.py"
#endif
},
    {"smmap", modulecode_smmap, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/smmap/__init__.py"
#endif
},
    {"smmap.buf", modulecode_smmap$buf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/smmap/buf.py"
#endif
},
    {"smmap.mman", modulecode_smmap$mman, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/smmap/mman.py"
#endif
},
    {"smmap.util", modulecode_smmap$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/janna/.local/lib/python3.10/site-packages/smmap/util.py"
#endif
},
    {"unittest", NULL, 57, 3379, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/__init__.py"
#endif
},
    {"unittest._log", NULL, 58, 2672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/_log.py"
#endif
},
    {"unittest.async_case", NULL, 59, 4730, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/async_case.py"
#endif
},
    {"unittest.case", NULL, 60, 48285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/case.py"
#endif
},
    {"unittest.loader", NULL, 61, 14408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/loader.py"
#endif
},
    {"unittest.main", NULL, 62, 7540, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/main.py"
#endif
},
    {"unittest.result", NULL, 63, 7968, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/result.py"
#endif
},
    {"unittest.runner", NULL, 64, 6936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/runner.py"
#endif
},
    {"unittest.signals", NULL, 65, 2237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/signals.py"
#endif
},
    {"unittest.suite", NULL, 66, 10252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/suite.py"
#endif
},
    {"unittest.util", NULL, 67, 4524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/unittest/util.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

