
/* std::ctype<char>::_M_widen_init() const */

void __thiscall std::ctype<char>::_M_widen_init(ctype<char> *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
    *(char *)((long)&local_128 + lVar2) = (char)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  if (*(code **)(*(long *)this + 0x38) == do_widen) {
    *(undefined8 *)(this + 0x39) = local_128;
    *(undefined8 *)(this + 0x41) = uStack_120;
    *(undefined8 *)(this + 0x49) = local_118;
    *(undefined8 *)(this + 0x51) = uStack_110;
    *(undefined8 *)(this + 0x59) = local_108;
    *(undefined8 *)(this + 0x61) = uStack_100;
    *(undefined8 *)(this + 0x69) = local_f8;
    *(undefined8 *)(this + 0x71) = uStack_f0;
    *(undefined8 *)(this + 0x79) = local_e8;
    *(undefined8 *)(this + 0x81) = uStack_e0;
    *(undefined8 *)(this + 0x89) = local_d8;
    *(undefined8 *)(this + 0x91) = uStack_d0;
    *(undefined8 *)(this + 0x99) = local_c8;
    *(undefined8 *)(this + 0xa1) = uStack_c0;
    *(undefined8 *)(this + 0xa9) = local_b8;
    *(undefined8 *)(this + 0xb1) = uStack_b0;
    *(undefined8 *)(this + 0xb9) = local_a8;
    *(undefined8 *)(this + 0xc1) = uStack_a0;
    *(undefined8 *)(this + 0xc9) = local_98;
    *(undefined8 *)(this + 0xd1) = uStack_90;
    *(undefined8 *)(this + 0xd9) = local_88;
    *(undefined8 *)(this + 0xe1) = uStack_80;
    *(undefined8 *)(this + 0xe9) = local_78;
    *(undefined8 *)(this + 0xf1) = uStack_70;
    *(undefined8 *)(this + 0xf9) = local_68;
    *(undefined8 *)(this + 0x101) = uStack_60;
    *(undefined8 *)(this + 0x109) = local_58;
    *(undefined8 *)(this + 0x111) = uStack_50;
    *(undefined8 *)(this + 0x119) = local_48;
    *(undefined8 *)(this + 0x121) = uStack_40;
    *(undefined8 *)(this + 0x129) = local_38;
    *(undefined8 *)(this + 0x131) = uStack_30;
  }
  else {
    (**(code **)(*(long *)this + 0x38))(this,&local_128,local_28,this + 0x39);
  }
  iVar1 = bcmp(&local_128,this + 0x39,0x100);
  this[0x38] = (ctype<char>)('\x02' - (iVar1 == 0));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

