
int hmac_update(long param_1,uchar *param_2,size_t param_3)

{
  uchar uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x38);
  if (uVar2 == 0) {
    iVar5 = HMAC_Update(*(HMAC_CTX **)(param_1 + 8),param_2,param_3);
    return iVar5;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar5 = 0;
    if (param_3 == 0xd) {
      iVar5 = 1;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)param_2;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 8);
      uVar1 = param_2[0xc];
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(uchar *)(param_1 + 0x4c) = uVar1;
    }
  }
  else {
    iVar5 = 0;
    if (param_3 <= uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = ossl_prov_digest_md(param_1 + 0x10);
      iVar5 = ssl3_cbc_digest_record
                        (uVar6,param_1 + 0x54,param_1 + 0x98,param_1 + 0x40,param_2,param_3,uVar2,
                         uVar4,uVar3,0);
      return iVar5;
    }
  }
  return iVar5;
}

