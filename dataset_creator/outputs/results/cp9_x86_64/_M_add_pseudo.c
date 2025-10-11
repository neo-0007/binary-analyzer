
/* std::Catalogs::_M_add(char const*, std::locale) */

int __thiscall std::Catalogs::_M_add(Catalogs *this,char *param_1,locale *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  int *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0x7fffffff) {
    iVar1 = -1;
  }
  else {
    *(int *)(this + 0x28) = iVar1 + 1;
    locale::locale((locale *)&local_38,param_3);
                    /* try { // try from 006aeda5 to 006aeda9 has its CatchHandler @ 006aee79 */
    piVar4 = (int *)operator_new(0x18);
    *piVar4 = iVar1;
    pcVar5 = strdup(param_1);
    *(char **)(piVar4 + 2) = pcVar5;
    locale::locale((locale *)(piVar4 + 4),(locale *)&local_38);
    locale::~locale((locale *)&local_38);
    if (*(long *)(piVar4 + 2) == 0) {
      locale::~locale((locale *)(piVar4 + 4));
      iVar1 = -1;
      operator_delete(piVar4);
    }
    else {
      puVar3 = *(undefined8 **)(this + 0x38);
      local_38 = piVar4;
      if (puVar3 == *(undefined8 **)(this + 0x40)) {
                    /* try { // try from 006aee57 to 006aee5b has its CatchHandler @ 006aee6d */
        vector<std::Catalog_info*,std::allocator<std::Catalog_info*>>::_M_realloc_insert
                  ((vector<std::Catalog_info*,std::allocator<std::Catalog_info*>> *)(this + 0x30),
                   puVar3,(locale *)&local_38);
      }
      else {
        *puVar3 = piVar4;
        *(undefined8 **)(this + 0x38) = puVar3 + 1;
      }
      iVar1 = *piVar4;
    }
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00403b56 to 00403b5a has its CatchHandler @ 00403b5b */
  __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}

