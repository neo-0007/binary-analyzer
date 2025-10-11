
undefined4
FUN_0045dba0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
            long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      lVar3 = FUN_0043bf50(*param_1);
      if ((lVar3 == 0) ||
         ((param_6 != 0 && (iVar1 = FUN_00549540(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0045ae10(lVar3,param_3,0x74,"DSA PRIVATE KEY",FUN_00459550,FUN_00457360,param_1)
        ;
      }
      FUN_004ab560(lVar3);
      return uVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                 "key2any_encode");
    FUN_0051f8f0(0x39,0xc0102,0);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x561,
               "dsa_to_PrivateKeyInfo_pem_encode");
  FUN_0051f8f0(0x39,0x80106,0);
  return 0;
}

