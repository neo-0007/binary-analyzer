
/* std::ctype<char>::_M_narrow_init() const */

void __thiscall std::ctype<char>::_M_narrow_init(ctype<char> *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  char local_139;
  char local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
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
  undefined1 local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
    (&local_138)[lVar2] = (char)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  if (*(code **)(*(long *)this + 0x48) == do_narrow) {
    *(ulong *)(this + 0x139) = CONCAT71(uStack_137,local_138);
    *(undefined8 *)(this + 0x141) = uStack_130;
    *(undefined8 *)(this + 0x149) = local_128;
    *(undefined8 *)(this + 0x151) = uStack_120;
    *(undefined8 *)(this + 0x159) = local_118;
    *(undefined8 *)(this + 0x161) = uStack_110;
    *(undefined8 *)(this + 0x169) = local_108;
    *(undefined8 *)(this + 0x171) = uStack_100;
    *(undefined8 *)(this + 0x179) = local_f8;
    *(undefined8 *)(this + 0x181) = uStack_f0;
    *(undefined8 *)(this + 0x189) = local_e8;
    *(undefined8 *)(this + 0x191) = uStack_e0;
    *(undefined8 *)(this + 0x199) = local_d8;
    *(undefined8 *)(this + 0x1a1) = uStack_d0;
    *(undefined8 *)(this + 0x1a9) = local_c8;
    *(undefined8 *)(this + 0x1b1) = uStack_c0;
    *(undefined8 *)(this + 0x1b9) = local_b8;
    *(undefined8 *)(this + 0x1c1) = uStack_b0;
    *(undefined8 *)(this + 0x1c9) = local_a8;
    *(undefined8 *)(this + 0x1d1) = uStack_a0;
    *(undefined8 *)(this + 0x1d9) = local_98;
    *(undefined8 *)(this + 0x1e1) = uStack_90;
    *(undefined8 *)(this + 0x1e9) = local_88;
    *(undefined8 *)(this + 0x1f1) = uStack_80;
    *(undefined8 *)(this + 0x1f9) = local_78;
    *(undefined8 *)(this + 0x201) = uStack_70;
    *(undefined8 *)(this + 0x209) = local_68;
    *(undefined8 *)(this + 0x211) = uStack_60;
    *(undefined8 *)(this + 0x219) = local_58;
    *(undefined8 *)(this + 0x221) = uStack_50;
    *(undefined8 *)(this + 0x229) = local_48;
    *(undefined8 *)(this + 0x231) = uStack_40;
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this,&local_138,local_38,0,this + 0x139);
  }
  this[0x239] = (ctype<char>)0x1;
  iVar1 = bcmp(&local_138,this + 0x139,0x100);
  if (iVar1 == 0) {
    if (*(code **)(*(long *)this + 0x48) == do_narrow) {
      local_139 = local_138;
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this,&local_138,&uStack_137,1,&local_139);
    }
    if (local_139 != '\x01') goto LAB_0063a4f7;
  }
  this[0x239] = (ctype<char>)0x2;
LAB_0063a4f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

