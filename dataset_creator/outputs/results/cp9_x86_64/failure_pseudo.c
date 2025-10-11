
/* std::ios_base::failure::failure(std::string const&) */

void __thiscall std::ios_base::failure::failure(failure *this,string *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__failure_0092c910;
  lVar1 = *(long *)param_1;
  if (*(int *)(lVar1 + -8) < 0) {
                    /* try { // try from 006c0dd7 to 006c0ddb has its CatchHandler @ 006c0e07 */
    lVar1 = std::string::_Rep::_M_clone((_Rep *)(lVar1 + -0x18),&local_21,0);
  }
  else if ((_Rep *)(lVar1 + -0x18) != (_Rep *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + -8) = *(int *)(lVar1 + -8) + 1;
    }
  }
  *(long *)(this + 8) = lVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

