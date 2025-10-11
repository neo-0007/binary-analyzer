
/* std::locale::locale() */

void __thiscall std::locale::locale(locale *this)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  *(undefined8 *)this = 0;
                    /* try { // try from 00626032 to 00626036 has its CatchHandler @ 006260ea */
  _S_initialize();
  piVar3 = _S_global;
  *(int **)this = _S_global;
  if (piVar3 != _S_classic) {
    if (::(anonymous_namespace)::get_locale_mutex()::locale_mutex == '\0') {
      iVar1 = __cxa_guard_acquire(&::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
      if (iVar1 != 0) {
        ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._32_8_ = 0;
        ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._0_16_ = (undefined1  [16])0x0;
        ::(anonymous_namespace)::get_locale_mutex()::locale_mutex._16_16_ = (undefined1  [16])0x0;
        __cxa_guard_release(&::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
      }
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)
                               ::(anonymous_namespace)::get_locale_mutex()::locale_mutex);
    piVar3 = _S_global;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __gnu_cxx::__throw_concurrence_lock_error();
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *_S_global = *_S_global + 1;
      UNLOCK();
      piVar3 = _S_global;
    }
    else {
      *_S_global = *_S_global + 1;
    }
    *(int **)this = piVar3;
    iVar1 = pthread_mutex_unlock
                      ((pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex()::locale_mutex)
    ;
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar2 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
                  __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
  }
  return;
}

