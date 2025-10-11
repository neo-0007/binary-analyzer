
ulong FUN_0046a0f0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (param_2 == 0) goto LAB_0046a2f0;
  lVar3 = thunk_FUN_0041cdd0(param_2,"pass");
  if (lVar3 != 0) {
    uVar2 = FUN_00469f20(param_1 + 0x10,param_1 + 0x18,lVar3);
    if ((int)uVar2 == 0) goto LAB_0046a2f0;
  }
  lVar3 = thunk_FUN_0041cdd0(param_2,"salt");
  if (lVar3 == 0) {
LAB_0046a17b:
    lVar3 = thunk_FUN_0041cdd0(param_2,"n");
    if (lVar3 != 0) {
      iVar1 = FUN_0041d830(lVar3,&local_28);
      if (((iVar1 == 0) || (local_28 < 2)) || ((local_28 - 1 & local_28) != 0)) goto LAB_0046a340;
      *(ulong *)(param_1 + 0x30) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"r");
    if (lVar3 != 0) {
      iVar1 = FUN_0041d830(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_0046a340;
      *(ulong *)(param_1 + 0x38) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"p");
    if (lVar3 != 0) {
      iVar1 = FUN_0041d830(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_0046a340;
      *(ulong *)(param_1 + 0x40) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"maxmem_bytes");
    if (lVar3 != 0) {
      iVar1 = FUN_0041d830(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_0046a340;
      *(ulong *)(param_1 + 0x48) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"properties");
    uVar2 = 1;
    if (lVar3 == 0) goto LAB_0046a2f0;
    if (*(int *)(lVar3 + 8) == 4) {
      lVar3 = *(long *)(lVar3 + 0x10);
      FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/kdfs/scrypt.c",0x8c);
      *(undefined8 *)(param_1 + 8) = 0;
      if (lVar3 != 0) {
        lVar3 = FUN_0041c2c0(lVar3,"../providers/implementations/kdfs/scrypt.c",0x8f);
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/scrypt.c",0x91,"set_property_query");
          FUN_0051f8f0(0x39,0xc0100,0);
          goto LAB_0046a340;
        }
      }
      iVar1 = FUN_0046a060(param_1);
      uVar2 = (ulong)(iVar1 != 0);
      goto LAB_0046a2f0;
    }
  }
  else {
    iVar1 = FUN_00469f20(param_1 + 0x20,param_1 + 0x28,lVar3);
    if (iVar1 != 0) goto LAB_0046a17b;
  }
LAB_0046a340:
  uVar2 = 0;
LAB_0046a2f0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

