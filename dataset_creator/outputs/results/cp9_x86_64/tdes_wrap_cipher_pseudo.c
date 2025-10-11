
undefined8
tdes_wrap_cipher(long param_1,uchar *param_2,long *param_3,ulong param_4,uchar *param_5,
                ulong param_6)

{
  size_t sVar1;
  uchar *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uchar *puVar6;
  long in_FS_OFFSET;
  uchar local_68 [8];
  uchar local_60 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) goto LAB_0044bb40;
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_tdes_wrap.c",0x8b,"tdes_wrap_cipher")
    ;
    ERR_set_error(0x39,0x6a,0);
    uVar5 = 0;
    goto LAB_0044b98a;
  }
  if ((param_6 >> 0x3e == 0) && ((param_6 & 7) == 0)) {
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      if (0x17 < param_6) {
        if (param_2 == (uchar *)0x0) {
LAB_0044bb8e:
          iVar3 = (int)param_6 + -0x10;
          goto LAB_0044b941;
        }
        puVar2 = (uchar *)(param_1 + 0x94);
        *(undefined8 *)(param_1 + 0x94) = 0x521e8792ca2dd4a;
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,param_5,8);
        if (param_2 == param_5) {
          param_5 = param_2 + -8;
          memmove(param_2,param_2 + 8,param_6 - 8);
          puVar6 = param_2;
        }
        else {
          puVar6 = param_5 + 8;
        }
        sVar1 = param_6 - 0x10;
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,puVar6,sVar1);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_60,param_5 + (param_6 - 8),8);
        BUF_reverse(local_68,(uchar *)0x0,8);
        BUF_reverse(param_2,(uchar *)0x0,sVar1);
        BUF_reverse(puVar2,local_60,8);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,sVar1);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,local_68,8);
        lVar4 = ossl_sha1(param_2,sVar1,local_58);
        if (lVar4 == 0) {
LAB_0044bafa:
          OPENSSL_cleanse(local_68,8);
          OPENSSL_cleanse(local_58,0x14);
          OPENSSL_cleanse(local_60,8);
          OPENSSL_cleanse(puVar2,0x10);
        }
        else {
          iVar3 = CRYPTO_memcmp(local_58,local_68,8);
          if (iVar3 != 0) goto LAB_0044bafa;
          OPENSSL_cleanse(local_68,8);
          OPENSSL_cleanse(local_58,0x14);
          OPENSSL_cleanse(local_60,8);
          OPENSSL_cleanse(puVar2,0x10);
          if ((int)param_6 != 0xf) goto LAB_0044bb8e;
        }
        OPENSSL_cleanse(param_2,sVar1);
      }
    }
    else {
      sVar1 = param_6 + 0x10;
      if (param_2 == (uchar *)0x0) {
LAB_0044b93e:
        iVar3 = (int)sVar1;
LAB_0044b941:
        if (0 < iVar3) {
          *param_3 = (long)iVar3;
          uVar5 = 1;
          goto LAB_0044b98a;
        }
      }
      else {
        puVar2 = param_2 + 8;
        memmove(puVar2,param_5,param_6);
        lVar4 = ossl_sha1(param_5,param_6,local_58);
        if (lVar4 != 0) {
          *(undefined8 *)(param_2 + param_6 + 8) = local_58[0];
          OPENSSL_cleanse(local_58,0x14);
          iVar3 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x94,8,0);
          if (0 < iVar3) {
            *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x94);
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,puVar2,puVar2,param_6 + 8);
            BUF_reverse(param_2,(uchar *)0x0,sVar1);
            *(undefined8 *)(param_1 + 0x94) = 0x521e8792ca2dd4a;
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,sVar1);
            goto LAB_0044b93e;
          }
        }
      }
    }
  }
LAB_0044bb40:
  uVar5 = 0;
LAB_0044b98a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

