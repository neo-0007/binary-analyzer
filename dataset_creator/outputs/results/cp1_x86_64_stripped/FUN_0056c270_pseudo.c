
undefined8
FUN_0056c270(undefined8 param_1,undefined1 *param_2,int param_3,undefined8 param_4,int param_5,
            undefined8 param_6,int param_7,long param_8,long param_9)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 local_90;
  byte local_88 [72];
  long local_40;
  
  param_3 = param_3 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    param_8 = FUN_0040bef0();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  iVar3 = FUN_0040ac10(param_8);
  if (iVar3 < 1) {
    FUN_0051f420();
    uVar10 = 0;
    FUN_0051f540("../crypto/rsa/rsa_oaep.c",0x51,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    FUN_0051f8f0(4,0xb5,0);
    goto LAB_0056c4d3;
  }
  iVar4 = param_3 + iVar3 * -2;
  if (iVar4 <= param_5) {
    FUN_0051f420();
    uVar10 = 0;
    FUN_0051f540("../crypto/rsa/rsa_oaep.c",0x57,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    FUN_0051f8f0(4,0x6e,0);
    goto LAB_0056c4d3;
  }
  if (param_3 <= iVar3 * 2) {
    FUN_0051f420();
    uVar10 = 0;
    FUN_0051f540("../crypto/rsa/rsa_oaep.c",0x5c,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    FUN_0051f8f0(4,0x78,0);
    goto LAB_0056c4d3;
  }
  lVar6 = (long)iVar3;
  *param_2 = 0;
  puVar2 = param_2 + lVar6 + 1;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar3 * 2);
  iVar5 = FUN_00407440(param_6,(long)param_7,puVar2,0,param_8,0);
  if (iVar5 == 0) {
LAB_0056c500:
    lVar11 = 0;
    lVar7 = 0;
    uVar10 = 0;
  }
  else {
    iVar5 = (param_3 - param_5) - (int)local_90;
    local_90 = puVar2;
    thunk_FUN_00713720(puVar2 + lVar6,0,(long)(iVar5 + -1));
    local_90[(long)(iVar5 + iVar3) + -1] = 1;
    thunk_FUN_00713a50(local_90 + (((long)param_3 - (long)param_5) - lVar6),param_4,param_5);
    iVar5 = FUN_00429580(param_1,param_2 + 1,lVar6,0);
    if (iVar5 < 1) goto LAB_0056c500;
    iVar4 = iVar4 + iVar3;
    lVar11 = (long)iVar4;
    lVar7 = FUN_0041ad90(lVar11,"../crypto/rsa/rsa_oaep.c",0x72);
    puVar2 = local_90;
    if (lVar7 == 0) {
      FUN_0051f420();
      uVar10 = 0;
      FUN_0051f540("../crypto/rsa/rsa_oaep.c",0x74,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
      FUN_0051f8f0(4,0xc0100,0);
    }
    else {
      iVar5 = FUN_0056c0c0(lVar7,lVar11,param_2 + 1,lVar6,param_9);
      if (iVar5 < 0) {
        uVar10 = 0;
      }
      else {
        lVar8 = 0;
        if (0 < iVar4) {
          do {
            pbVar1 = puVar2 + lVar8;
            *pbVar1 = *pbVar1 ^ *(byte *)(lVar7 + lVar8);
            lVar8 = lVar8 + 1;
          } while (lVar11 != lVar8);
        }
        uVar10 = 0;
        iVar4 = FUN_0056c0c0(local_88,lVar6,puVar2,lVar11,param_9);
        if (-1 < iVar4) {
          uVar9 = 1;
          do {
            param_2[uVar9] = param_2[uVar9] ^ local_88[uVar9 - 1];
            uVar9 = uVar9 + 1;
          } while (iVar3 + 1 != uVar9);
          uVar10 = 1;
        }
      }
    }
  }
  FUN_004227b0(local_88,0x40);
  FUN_0041aef0(lVar7,lVar11,"../crypto/rsa/rsa_oaep.c",0x89);
LAB_0056c4d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

