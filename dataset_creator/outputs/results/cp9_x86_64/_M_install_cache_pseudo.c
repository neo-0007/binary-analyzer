
/* std::locale::_Impl::_M_install_cache(std::locale::facet const*, unsigned long) */

void __thiscall std::locale::_Impl::_M_install_cache(_Impl *this,facet *param_1,ulong param_2)

{
  long lVar1;
  id *this_00;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex == '\0') &&
     (iVar2 = __cxa_guard_acquire(&::(anonymous_namespace)::get_locale_cache_mutex()::
                                   locale_cache_mutex), iVar2 != 0)) {
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._32_8_ = 0;
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._0_16_ =
         (undefined1  [16])0x0;
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._16_16_ =
         (undefined1  [16])0x0;
    __cxa_guard_release(&::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)
                             ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar3 = &PTR____concurrence_lock_error_00927248;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&__gnu_cxx::__concurrence_lock_error::typeinfo,
                __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
  }
  ppuVar8 = &_S_twinned_facets;
  this_00 = (id *)_S_twinned_facets;
  do {
    uVar4 = param_2;
    if (this_00 == (id *)0x0) {
      uVar5 = 0xffffffffffffffff;
LAB_00624d7a:
      lVar7 = *(long *)(this + 0x18);
      plVar6 = (long *)(lVar7 + uVar4 * 8);
      if (*plVar6 == 0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          UNLOCK();
          lVar7 = *(long *)(this + 0x18);
          plVar6 = (long *)(lVar7 + uVar4 * 8);
        }
        else {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        *plVar6 = (long)param_1;
        if (uVar5 != 0xffffffffffffffff) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            UNLOCK();
            lVar7 = *(long *)(this + 0x18);
          }
          else {
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          }
          *(facet **)(lVar7 + uVar5 * 8) = param_1;
        }
      }
      else if (param_1 != (facet *)0x0) {
        if (*(code **)(*(long *)param_1 + 8) == facet::~facet) {
                    /* try { // try from 00624db0 to 00624db4 has its CatchHandler @ 00624ede */
          facet::~facet(param_1);
          operator_delete(param_1);
        }
        else {
                    /* try { // try from 00624ea8 to 00624ea9 has its CatchHandler @ 00624ed2 */
          (**(code **)(*(long *)param_1 + 8))();
        }
      }
      iVar2 = pthread_mutex_unlock
                        ((pthread_mutex_t *)
                         ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
      if (iVar2 == 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      puVar3 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar3 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00402381 to 00402385 has its CatchHandler @ 0040239e */
      __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
                  __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
    uVar5 = locale::id::_M_id(this_00);
    if (uVar5 == param_2) {
      uVar5 = locale::id::_M_id((id *)ppuVar8[1]);
      goto LAB_00624d7a;
    }
    uVar4 = locale::id::_M_id((id *)ppuVar8[1]);
    if (uVar4 == param_2) {
      uVar4 = locale::id::_M_id((id *)*ppuVar8);
      uVar5 = param_2;
      goto LAB_00624d7a;
    }
    this_00 = (id *)ppuVar8[2];
    ppuVar8 = ppuVar8 + 2;
  } while( true );
}

