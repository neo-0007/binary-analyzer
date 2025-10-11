
bool FUN_0046a060(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00406a50(param_1[10]);
  lVar1 = FUN_004069d0(*param_1,"sha256",param_1[1]);
  param_1[10] = lVar1;
  if (lVar1 == 0) {
    FUN_0041ad60(param_1,"../providers/implementations/kdfs/scrypt.c",0x83);
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/scrypt.c",0x84,"set_digest");
    FUN_0051f8f0(0x39,0x93,0);
  }
  return lVar1 != 0;
}

