
/* __gnu_cxx::__scoped_lock::~__scoped_lock() */

void __thiscall __gnu_cxx::__scoped_lock::~__scoped_lock(__scoped_lock *this)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00623c92 to 00623c96 has its CatchHandler @ 00623c97 */
  __cxa_throw(puVar2,&__concurrence_unlock_error::typeinfo,
              __concurrence_unlock_error::~__concurrence_unlock_error);
}

