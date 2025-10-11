
undefined8
FUN_00430920(undefined8 param_1,long param_2,ulong param_3,byte *param_4,ulong param_5,uint param_6,
            uint param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  long in_FS_OFFSET;
  byte local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 < 0x3b) || (param_3 < 0x30)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x234,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
    FUN_0051f8f0(4,0x9f,0);
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00429760(param_1,local_78,0x30,0);
    if (iVar2 < 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x23e,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
      FUN_0051f8f0(4,0xc0103,0);
      uVar4 = 0xffffffff;
    }
    else {
      uVar5 = 2;
      uVar6 = (int)(*param_4 - 1 & ~(uint)*param_4 & ~(uint)(param_4[1] ^ 2) & (param_4[1] ^ 2) - 1)
              >> 0x1f;
      do {
        uVar6 = uVar6 & ~((int)(~(uint)param_4[uVar5] & param_4[uVar5] - 1) >> 0x1f & 0xffU);
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < param_5 - 0x31);
      bVar1 = param_4[param_5 - 0x30];
      bVar7 = (byte)((param_6 >> 8 & 0xff ^ (uint)bVar1) - 1 >> 0x18) &
              (byte)((param_6 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 >> 0x18);
      if (0 < (int)param_7) {
        bVar7 = bVar7 | (byte)((param_7 >> 8 & 0xff ^ (uint)bVar1) - 1 >> 0x18) &
                        (byte)((param_7 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 >> 0x18);
      }
      bVar7 = (char)bVar7 >> 7 & (byte)((int)(param_4[param_5 - 0x31] - 1) >> 0x1f) & (byte)uVar6;
      lVar3 = 0;
      while( true ) {
        *(byte *)(param_2 + lVar3) = local_78[lVar3] & ~bVar7 | bVar1 & bVar7;
        if (lVar3 + 1 == 0x30) break;
        bVar1 = param_4[lVar3 + -0x2f + param_5];
        lVar3 = lVar3 + 1;
      }
      uVar4 = 0x30;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

