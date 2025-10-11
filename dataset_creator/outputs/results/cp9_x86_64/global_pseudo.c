
/* std::locale::global(std::locale const&) */

locale * __thiscall std::locale::global(locale *this,locale *param_1)

{
  int *piVar1;
  _Impl *p_Var2;
  int iVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  char *local_58 [2];
  char local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _S_initialize();
  if (::(anonymous_namespace)::get_locale_mutex()::locale_mutex == '\0') {
    iVar3 = __cxa_guard_acquire(&::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
    if (iVar3 != 0) {
      ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._32_8_ = 0;
      ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._0_16_ = (undefined1  [16])0x0;
      ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._16_16_ = (undefined1  [16])0x0;
      __cxa_guard_release(&::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
    }
  }
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)
                             ::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
  p_Var2 = _S_global;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  piVar1 = *(int **)param_1;
  _S_global = (_Impl *)_S_classic;
  if (piVar1 != _S_classic) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      _S_global = *(_Impl **)param_1;
    }
    else {
      *piVar1 = *piVar1 + 1;
      _S_global = (_Impl *)piVar1;
    }
  }
                    /* try { // try from 006261b3 to 006261b7 has its CatchHandler @ 00626292 */
  name_abi_cxx11_();
  iVar3 = __cxx11::string::compare((string *)local_58,"*");
  if (iVar3 != 0) {
    setlocale(6,local_58[0]);
  }
  if (local_58[0] != local_48) {
    operator_delete(local_58[0]);
  }
  iVar3 = pthread_mutex_unlock
                    ((pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
  if (iVar3 == 0) {
    locale(this,p_Var2);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return this;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}

