
void _Unwind_Resume(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_SSP;
  undefined8 unaff_retaddr;
  ulong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
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
  undefined8 local_38;
  
  local_38 = param_3;
  uw_init_context_1(&local_228,&stack0x00000008,unaff_retaddr);
  local_138 = local_228;
  uStack_130 = uStack_220;
  local_128 = local_218;
  uStack_120 = uStack_210;
  local_118 = local_208;
  uStack_110 = uStack_200;
  local_108 = local_1f8;
  uStack_100 = uStack_1f0;
  local_f8 = local_1e8;
  uStack_f0 = uStack_1e0;
  local_e8 = local_1d8;
  uStack_e0 = uStack_1d0;
  local_d8 = local_1c8;
  uStack_d0 = uStack_1c0;
  local_c8 = local_1b8;
  uStack_c0 = uStack_1b0;
  local_b8 = local_1a8;
  uStack_b0 = uStack_1a0;
  local_a8 = local_198;
  uStack_a0 = uStack_190;
  local_98 = local_188;
  uStack_90 = uStack_180;
  local_88 = local_178;
  uStack_80 = uStack_170;
  local_78 = local_168;
  uStack_70 = uStack_160;
  local_68 = local_158;
  uStack_60 = uStack_150;
  local_58 = local_148;
  uStack_50 = uStack_140;
  if (*(long *)(param_1 + 0x10) == 0) {
    iVar1 = _Unwind_RaiseException_Phase2();
  }
  else {
    iVar1 = _Unwind_ForcedUnwind_Phase2(param_1,&local_138,&local_230);
  }
  if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uw_install_context_1(&local_228,&local_138);
  uVar3 = uStack_a0;
  lVar2 = _Unwind_DebugHook(local_a8,uStack_a0,0);
  if (in_SSP != 0) {
    for (; 0xff < local_230; local_230 = local_230 - 0xff) {
    }
  }
  *(undefined8 *)(&stack0x00000000 + lVar2) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x006c3d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&stack0x00000000 + lVar2))();
  return;
}

