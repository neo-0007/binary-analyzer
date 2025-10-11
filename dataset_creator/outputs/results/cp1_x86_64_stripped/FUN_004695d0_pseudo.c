
bool FUN_004695d0(long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_0041aef0(*param_1,*param_2,"../providers/implementations/kdfs/pkcs12kdf.c",0xb8);
  *param_1 = 0;
  *param_2 = 0;
  if (*(long *)(param_3 + 0x18) == 0) {
    lVar2 = FUN_0041ad90(1,"../providers/implementations/kdfs/pkcs12kdf.c",0xbd);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0xbe,"pkcs12kdf_set_membuf");
      FUN_0051f8f0(0x39,0xc0100,0);
      return false;
    }
  }
  else if (*(long *)(param_3 + 0x10) != 0) {
    iVar1 = FUN_0041e150(param_3,param_1,0,param_2);
    return iVar1 != 0;
  }
  return true;
}

