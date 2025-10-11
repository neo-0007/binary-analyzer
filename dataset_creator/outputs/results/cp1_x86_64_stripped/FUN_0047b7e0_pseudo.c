
bool FUN_0047b7e0(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if (param_2 != 0) {
    lVar3 = thunk_FUN_0041cdd0(param_2,"strength");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d240(lVar3,param_1 + 0xc);
      if (iVar2 != 0) goto LAB_0047b83f;
LAB_0047b86b:
      bVar4 = false;
      goto LAB_0047b86d;
    }
LAB_0047b83f:
    lVar3 = thunk_FUN_0041cdd0(param_2,"test_entropy");
    if (lVar3 != 0) {
      iVar2 = FUN_0041e150(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_0047b86b;
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),"../providers/implementations/rands/test_rng.c",
                   0xbd);
      uVar1 = local_30;
      *(undefined8 *)(param_1 + 0x30) = 0;
      local_30 = 0;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"test_nonce");
    if (lVar3 != 0) {
      iVar2 = FUN_0041e150(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_0047b86b;
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../providers/implementations/rands/test_rng.c",
                   200);
      *(undefined8 *)(param_1 + 0x20) = local_30;
      *(undefined8 *)(param_1 + 0x38) = local_28;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"max_request");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d830(lVar3,param_1 + 0x10);
      bVar4 = iVar2 != 0;
      goto LAB_0047b86d;
    }
  }
  bVar4 = true;
LAB_0047b86d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

