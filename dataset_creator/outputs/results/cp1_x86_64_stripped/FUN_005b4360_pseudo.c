
undefined4
FUN_005b4360(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar1 = FUN_004a6000(param_3,&local_48,param_1);
  uVar2 = 0;
  if ((-1 < iVar1) && (local_48 != 0)) {
    lVar3 = FUN_0040aae0(param_2);
    lVar5 = param_2;
    if (lVar3 == 0) {
      uVar2 = FUN_0040aaf0(param_2);
      lVar3 = FUN_0051cf90(uVar2);
      if (lVar3 == 0) {
        uVar4 = FUN_0040ab30(param_2);
        lVar5 = FUN_004069d0(param_6,uVar4,param_7);
      }
      else {
        FUN_0051a270(lVar3);
      }
    }
    uVar2 = 0;
    if (lVar5 != 0) {
      uVar2 = FUN_00407440(local_48,(long)iVar1,param_4,param_5,lVar5,0);
    }
    FUN_0041ad60(local_48,"../crypto/asn1/a_digest.c",0x53);
    if (lVar5 != param_2) {
      FUN_00406a50(lVar5);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

