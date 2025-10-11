
undefined8 FUN_004a8460(long *param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (long *)0x0) {
    lVar3 = (long)param_3;
    if (((*param_1 != 0) && (lVar2 = *(long *)(param_4 + 0x20), lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 8) & 2) != 0)) {
      uVar4 = 0;
      plVar1 = (long *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
      FUN_0041ad60(*plVar1,"../crypto/asn1/tasn_utl.c",0xa8);
      if (0 < param_3) {
        lVar2 = FUN_0041ad90(lVar3,"../crypto/asn1/tasn_utl.c",0xab);
        *plVar1 = lVar2;
        if (lVar2 == 0) {
          FUN_0051f420(0);
          FUN_0051f540("../crypto/asn1/tasn_utl.c",0xac,"ossl_asn1_enc_save");
          FUN_0051f8f0(0xd,0xc0100,0);
        }
        else {
          uVar4 = 1;
          thunk_FUN_00713a50(lVar2,param_2,lVar3);
          plVar1[1] = lVar3;
          *(undefined4 *)(plVar1 + 2) = 0;
        }
      }
      return uVar4;
    }
  }
  return 1;
}

