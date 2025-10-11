
undefined8 rc4_hmac_md5_ctrl(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  MD5_CTX *c;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ushort uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 != 0x16) {
    uVar3 = 0xffffffff;
    if (param_2 == 0x17) {
      c = (MD5_CTX *)(lVar2 + 0x408);
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      if (param_3 < 0x41) {
        __memcpy_chk(local_88,param_4,(long)param_3,0x40);
      }
      else {
        MD5_Init(c);
        MD5_Update(c,param_4,(long)param_3);
        MD5_Final(local_88,c);
      }
      pbVar4 = local_88;
      do {
        *pbVar4 = *pbVar4 ^ 0x36;
        pbVar4 = pbVar4 + 1;
      } while (local_48 != pbVar4);
      MD5_Init(c);
      MD5_Update(c,local_88,0x40);
      pbVar4 = local_88;
      do {
        *pbVar4 = *pbVar4 ^ 0x6a;
        pbVar4 = pbVar4 + 1;
      } while (local_48 != pbVar4);
      MD5_Init((MD5_CTX *)(lVar2 + 0x464));
      MD5_Update((MD5_CTX *)(lVar2 + 0x464),local_88,0x40);
      OPENSSL_cleanse(local_88,0x40);
      uVar3 = 1;
    }
    goto LAB_00524525;
  }
  if (param_3 == 0xd) {
    uVar5 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
    uVar6 = (uint)uVar5;
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar1 == 0) {
      if (uVar5 < 0x10) goto LAB_0052465d;
      uVar6 = uVar5 - 0x10;
      *(ushort *)((long)param_4 + 0xb) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
    }
    *(ulong *)(lVar2 + 0x520) = (ulong)uVar6;
    *(undefined8 *)(lVar2 + 0x4c0) = *(undefined8 *)(lVar2 + 0x408);
    *(undefined8 *)(lVar2 + 0x4c8) = *(undefined8 *)(lVar2 + 0x410);
    *(undefined8 *)(lVar2 + 0x510) = *(undefined8 *)(lVar2 + 0x458);
    *(undefined8 *)(lVar2 + 0x4d0) = *(undefined8 *)(lVar2 + 0x418);
    *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(lVar2 + 0x420);
    *(undefined4 *)(lVar2 + 0x518) = *(undefined4 *)(lVar2 + 0x460);
    *(undefined8 *)(lVar2 + 0x4e0) = *(undefined8 *)(lVar2 + 0x428);
    *(undefined8 *)(lVar2 + 0x4e8) = *(undefined8 *)(lVar2 + 0x430);
    *(undefined8 *)(lVar2 + 0x4f0) = *(undefined8 *)(lVar2 + 0x438);
    *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(lVar2 + 0x440);
    *(undefined8 *)(lVar2 + 0x500) = *(undefined8 *)(lVar2 + 0x448);
    *(undefined8 *)(lVar2 + 0x508) = *(undefined8 *)(lVar2 + 0x450);
    MD5_Update((MD5_CTX *)(lVar2 + 0x4c0),param_4,0xd);
    uVar3 = 0x10;
  }
  else {
LAB_0052465d:
    uVar3 = 0xffffffff;
  }
LAB_00524525:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

