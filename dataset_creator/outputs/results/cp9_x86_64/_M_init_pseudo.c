
/* std::ios_base::_M_init() */

void __thiscall std::ios_base::_M_init(ios_base *this)

{
  long in_FS_OFFSET;
  locale alStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 6;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x1002;
  locale::locale(alStack_28);
  locale::operator=((locale *)(this + 0xd0),alStack_28);
  locale::~locale(alStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

