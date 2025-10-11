
bool drbg_ctr_generate(long param_1,uchar *param_2,size_t param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_58;
  int local_44;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) || (param_5 == 0)) {
    param_5 = 0;
    local_58 = param_4;
  }
  else {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar10 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar10;
    } while ((byte *)(lVar2 + 0x53) != pbVar10);
    iVar4 = ctr_update(param_1,param_4,param_5,0,0,0,0);
    if (iVar4 == 0) {
LAB_00477818:
      bVar12 = false;
      goto LAB_004777ee;
    }
    bVar12 = *(int *)(lVar2 + 0x30) != 0;
    if (bVar12) {
      param_5 = 1;
    }
    local_58 = 0;
    if (!bVar12) {
      local_58 = param_4;
    }
  }
  pbVar10 = (byte *)(lVar2 + 0x53);
  uVar3 = 1;
  pbVar8 = (byte *)(lVar2 + 99);
  do {
    bVar1 = *pbVar8;
    pbVar11 = pbVar8 + -1;
    *pbVar8 = (byte)(uVar3 + bVar1);
    uVar3 = uVar3 + bVar1 >> 8;
    pbVar8 = pbVar11;
  } while (pbVar10 != pbVar11);
  if (param_3 == 0) {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar11 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar11;
    } while (pbVar10 != pbVar11);
  }
  else {
    memset(param_2,0,param_3);
    do {
      iVar4 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 8),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                (uchar *)0x0,(uchar *)(lVar2 + 0x54),-1);
      if (iVar4 == 0) goto LAB_00477818;
      uVar3 = *(uint *)(lVar2 + 0x60);
      uVar7 = 0x40000000;
      if (param_3 < 0x40000001) {
        uVar7 = param_3;
      }
      uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      iVar4 = (int)uVar7;
      uVar3 = iVar4 + 0xf >> 4;
      uVar6 = uVar3 + uVar9;
      if (CARRY4(uVar3,uVar9)) {
        uVar3 = 1;
        if (uVar6 != 0) {
          iVar4 = uVar9 * -0x10;
        }
        pbVar8 = (byte *)(lVar2 + 0x5f);
        do {
          bVar1 = *pbVar8;
          pbVar11 = pbVar8 + -1;
          *pbVar8 = (byte)(uVar3 + bVar1);
          uVar3 = uVar3 + bVar1 >> 8;
          pbVar8 = pbVar11;
        } while (pbVar10 != pbVar11);
        uVar6 = 0;
      }
      *(uint *)(lVar2 + 0x60) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      iVar5 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(lVar2 + 8),param_2,&local_44,param_2,iVar4);
      if ((iVar5 == 0) || (local_44 != iVar4)) goto LAB_00477818;
      param_2 = param_2 + iVar4;
      param_3 = param_3 - (long)iVar4;
    } while (param_3 != 0);
  }
  iVar4 = ctr_update(param_1,local_58,param_5,0,0,0,0);
  bVar12 = iVar4 != 0;
LAB_004777ee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar12;
}

