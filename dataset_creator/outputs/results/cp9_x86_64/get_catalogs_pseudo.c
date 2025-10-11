
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_catalogs() */

undefined1 * std::get_catalogs(void)

{
  int iVar1;
  
  if (get_catalogs()::__catalogs == '\0') {
    iVar1 = __cxa_guard_acquire(&get_catalogs()::__catalogs);
    if (iVar1 != 0) {
      get_catalogs()::__catalogs._0_16_ = (undefined1  [16])0x0;
      get_catalogs()::__catalogs._16_16_ = (undefined1  [16])0x0;
      get_catalogs()::__catalogs._32_8_ = 0;
      get_catalogs()::__catalogs._40_8_ = 0;
      get_catalogs()::__catalogs._48_8_ = 0;
      get_catalogs()::__catalogs._56_8_ = 0;
      get_catalogs()::__catalogs._64_8_ = 0;
      __cxa_atexit(Catalogs::~Catalogs,get_catalogs()::__catalogs,&__dso_handle);
      __cxa_guard_release(&get_catalogs()::__catalogs);
      return get_catalogs()::__catalogs;
    }
  }
  return get_catalogs()::__catalogs;
}

