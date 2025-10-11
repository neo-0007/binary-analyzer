
undefined8 FUN_0047d960(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = 0;
  if (param_1 == 0) {
LAB_0047db00:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      lVar2 = thunk_FUN_0041cdd0(param_2,"digest");
      if (lVar2 != 0) {
        local_158 = 0;
        local_188 = (undefined1  [16])0x0;
        local_178 = (undefined1  [16])0x0;
        local_168 = (undefined1  [16])0x0;
        local_148 = (undefined1  [16])0x0;
        local_138 = (undefined1  [16])0x0;
        local_128 = (undefined1  [16])0x0;
        local_118 = (undefined1  [16])0x0;
        local_108 = (undefined1  [16])0x0;
        local_f8 = (undefined1  [16])0x0;
        local_e8 = (undefined1  [16])0x0;
        local_d8 = (undefined1  [16])0x0;
        local_c8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        local_a8 = (undefined1  [16])0x0;
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        local_198 = local_188;
        local_190 = local_148;
        lVar3 = thunk_FUN_0041cdd0(param_2,"properties");
        iVar1 = FUN_0041e0b0(lVar2,&local_198,0x32);
        if ((iVar1 == 0) ||
           (((lVar3 != 0 && (iVar1 = FUN_0041e0b0(lVar3,&local_190,0x100), iVar1 == 0)) ||
            (iVar1 = FUN_0047d680(param_1,local_188,local_148), iVar1 == 0)))) goto LAB_0047db00;
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"digest-size");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041d830(lVar2,&local_1a0);
        if ((iVar1 == 0) ||
           (((*(byte *)(param_1 + 0x4a) & 1) == 0 && (*(long *)(param_1 + 0x160) != local_1a0))))
        goto LAB_0047db00;
        *(long *)(param_1 + 0x160) = local_1a0;
      }
    }
    uVar4 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

