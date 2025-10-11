
undefined8 FUN_005b7b90(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  lVar2 = FUN_00602a60(&local_70,local_68);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_time.c",0x14c,"ASN1_TIME_adj");
    FUN_0051f8f0(0xd,0xad,0);
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = FUN_00602a80(lVar2,param_3,param_4);
      if (iVar1 == 0) {
        uVar3 = 0;
        goto LAB_005b7bef;
      }
    }
    uVar3 = FUN_005b7a40(param_1,lVar2,0xffffffff);
  }
LAB_005b7bef:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

