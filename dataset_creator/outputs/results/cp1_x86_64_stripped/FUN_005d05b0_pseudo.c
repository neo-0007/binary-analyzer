
int FUN_005d05b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00619770(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec2_smpl.c",0x3a7,"ec_GF2m_simple_field_inv");
  FUN_0051f8f0(0x10,0xa5,0);
  return 0;
}

