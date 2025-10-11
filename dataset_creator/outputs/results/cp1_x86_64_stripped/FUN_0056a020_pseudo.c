
int FUN_0056a020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00423da0(*param_4);
  if (iVar1 == 0x390) {
    iVar1 = FUN_00569e30(param_1,0,param_4,param_6);
    iVar1 = (uint)(0 < iVar1) * 3 + -1;
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x269,"rsa_item_verify");
    FUN_0051f8f0(4,0x9b,0);
    iVar1 = -1;
  }
  return iVar1;
}

