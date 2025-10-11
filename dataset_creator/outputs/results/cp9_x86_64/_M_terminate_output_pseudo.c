
/* std::wfilebuf::_M_terminate_output() */

bool __thiscall std::wfilebuf::_M_terminate_output(wfilebuf *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_d0;
  char local_c8 [128];
  undefined1 local_48 [8];
  long local_40;
  
  bVar6 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
    iVar2 = (**(code **)(*(long *)this + 0x68))(this,0xffffffff);
    bVar6 = iVar2 != -1;
  }
  if (this[0xaa] != (wfilebuf)0x0) {
    if (*(long **)(this + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      __throw_bad_cast();
    }
    cVar1 = (**(code **)(**(long **)(this + 200) + 0x30))();
    if ((cVar1 == '\0') && (bVar6 != false)) {
      do {
        uVar3 = (**(code **)(**(long **)(this + 200) + 0x18))
                          (*(long **)(this + 200),this + 0x84,local_c8,local_48,&local_d0);
        bVar6 = false;
        if (uVar3 == 2) goto LAB_00664d70;
        if ((1 < uVar3) || (lVar5 = local_d0 - (long)local_c8, lVar5 < 1)) break;
        lVar4 = __basic_file<char>::xsputn((__basic_file<char> *)(this + 0x68),local_c8,lVar5);
        if (lVar5 != lVar4) goto LAB_00664d70;
      } while (uVar3 != 0);
      iVar2 = (**(code **)(*(long *)this + 0x68))(this,0xffffffff);
      bVar6 = iVar2 != -1;
    }
  }
LAB_00664d70:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar6;
}

