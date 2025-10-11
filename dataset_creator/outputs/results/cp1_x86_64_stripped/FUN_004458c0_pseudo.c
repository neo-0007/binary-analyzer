
undefined8
FUN_004458c0(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      if (param_6 == 0) {
        if (param_3 == (ulong *)0x0) {
          return 1;
        }
        *param_3 = 0;
        return 1;
      }
      if (param_4 < param_6) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_siv.c",0x84,"siv_cipher");
        FUN_0051f8f0(0x39,0x6a,0);
        return 0;
      }
    }
    iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,param_5,param_6);
    if (0 < iVar1) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = param_6;
      }
      return 1;
    }
  }
  return 0;
}

