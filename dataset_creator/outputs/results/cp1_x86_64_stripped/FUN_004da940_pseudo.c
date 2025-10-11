
undefined4
FUN_004da940(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5
            ,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = param_4;
  local_58 = FUN_004da450();
  if (local_58 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar5 = (long)param_5;
    lVar3 = FUN_004da510(&local_58,&local_50,lVar5);
    if (lVar3 == 0) {
      lVar5 = -1;
      uVar2 = 0xffffffff;
      uVar4 = local_48;
    }
    else {
      iVar1 = FUN_004da640(local_58,&local_48);
      uVar4 = local_48;
      if (param_5 == iVar1) {
        uVar2 = 0xffffffff;
        iVar1 = thunk_FUN_00713570(param_4,local_48,lVar5);
        if (iVar1 == 0) {
          uVar2 = FUN_004daa90(param_2,param_3,local_58,param_6);
          uVar4 = local_48;
        }
      }
      else {
        lVar5 = (long)iVar1;
        uVar2 = 0xffffffff;
      }
    }
    FUN_0041aef0(uVar4,lVar5,"../crypto/dsa/dsa_sign.c",0xce);
    FUN_004da4d0(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

