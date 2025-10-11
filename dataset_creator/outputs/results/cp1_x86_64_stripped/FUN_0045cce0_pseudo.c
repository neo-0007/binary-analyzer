
int FUN_0045cce0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x562,
                 "dsa_to_SubjectPublicKeyInfo_der_encode");
    FUN_0051f8f0(0x39,0x80106,0);
    goto LAB_0045cd43;
  }
  if (param_3 == 0) {
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                 "key2any_encode");
    FUN_0051f8f0(0x39,0xc0102,0);
    goto LAB_0045cd43;
  }
  lVar2 = FUN_0043bf50(*param_1);
  if (lVar2 == 0) {
LAB_0045ce20:
    iVar1 = 0;
  }
  else {
    if (param_6 != 0) {
      iVar1 = FUN_00549540(param_1 + 3,param_6,param_7);
      if (iVar1 == 0) goto LAB_0045ce20;
    }
    local_3c = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_00459550(param_3,0x74,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
    if (iVar1 != 0) {
      iVar1 = 0;
      lVar3 = FUN_00456ff0(param_3,0x74,local_38,local_3c,FUN_00457430);
      if (lVar3 != 0) {
        iVar1 = FUN_005ab750(lVar2,lVar3);
      }
      FUN_005ae290(lVar3);
    }
  }
  FUN_004ab560(lVar2);
LAB_0045cd43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

