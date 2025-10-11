
undefined8 FUN_00408460(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_00417730(param_1,0,&DAT_008dd2c0);
  puVar3 = (undefined8 *)FUN_00425350(param_1,param_3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar2 == 0)) {
    FUN_0051f420();
    uVar6 = 0x1f0;
  }
  else {
    if (param_4 == 0) {
      FUN_004253d0();
    }
    else {
      iVar1 = FUN_00425390(param_1);
      if (iVar1 != 0) {
        return 0;
      }
    }
    lVar4 = FUN_004275f0(param_1,param_2,0,0);
    if ((lVar4 == 0) || (lVar5 = FUN_0041ad90(lVar4,"../crypto/evp/evp_fetch.c",0x1dd), lVar5 == 0))
    {
      FUN_0051f420();
      uVar6 = 0x1df;
    }
    else {
      lVar4 = FUN_004275f0(param_1,param_2,lVar5,lVar4);
      if (lVar4 != 0) {
        FUN_00421dd0(param_1,lVar5);
        FUN_0041ad60(lVar5,"../crypto/evp/evp_fetch.c",0x1e9);
        FUN_004273f0(*puVar3);
        *puVar3 = param_2;
        uVar6 = FUN_00425cc0(lVar2);
        return uVar6;
      }
      FUN_0041ad60(lVar5,"../crypto/evp/evp_fetch.c",0x1e4);
      FUN_0051f420();
      uVar6 = 0x1e5;
    }
  }
  FUN_0051f540("../crypto/evp/evp_fetch.c",uVar6,"evp_set_parsed_default_properties");
  FUN_0051f8f0(6,0xc0103,0);
  return 0;
}

