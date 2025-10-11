
undefined8
gcm_cipher_internal(long param_1,long param_2,size_t *param_3,long param_4,size_t param_5)

{
  long *plVar1;
  size_t len;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  void *ptr;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0x28) == -1) {
    if (((*(byte *)(param_1 + 0x54) & 4) != 0) && (iVar4 = *(int *)(param_1 + 0x50), iVar4 != 3)) {
      if (iVar4 == 0) {
        if (((((*(byte *)(param_1 + 0x54) & 1) != 0) && (0xb < *(ulong *)(param_1 + 0x10))) &&
            (iVar4 = (int)*(ulong *)(param_1 + 0x10), 0 < iVar4)) &&
           (iVar4 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,(long)iVar4,0),
           0 < iVar4)) {
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          *(undefined4 *)(param_1 + 0x50) = 1;
LAB_00485ba4:
          iVar4 = (**(code **)(lVar2 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x50) = 2;
            goto LAB_00485a49;
          }
        }
      }
      else {
        if (iVar4 == 1) goto LAB_00485ba4;
LAB_00485a49:
        if (param_4 == 0) {
          if ((((*(byte *)(param_1 + 0x54) & 1) != 0) || (*(long *)(param_1 + 0x18) != -1)) &&
             (iVar4 = (**(code **)(lVar2 + 0x20))(param_1,param_1 + 0xd5), iVar4 != 0)) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            uVar5 = 1;
            param_5 = 0;
            goto LAB_00485a7c;
          }
        }
        else {
          if (param_2 == 0) {
            iVar4 = (**(code **)(lVar2 + 0x10))(param_1,param_4,param_5);
          }
          else {
            iVar4 = (**(code **)(lVar2 + 0x18))(param_1,param_4,param_5,param_2);
          }
          if (iVar4 != 0) {
            uVar5 = 1;
            goto LAB_00485a7c;
          }
        }
      }
    }
    uVar5 = 0;
    param_5 = 0;
    goto LAB_00485a7c;
  }
  iVar4 = ossl_prov_is_running();
  if (((iVar4 == 0) || ((*(byte *)(param_1 + 0x54) & 4) == 0)) ||
     ((param_4 != param_2 || (param_5 < 0x18)))) {
LAB_00485b58:
    uVar5 = 0;
    param_5 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      plVar1 = (long *)(param_1 + 0x30);
      *plVar1 = *plVar1 + 1;
      if (*plVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x20a,
                      "gcm_tls_cipher");
        ERR_set_error(0x39,0x7e,0);
      }
      else {
        iVar4 = getivgen(param_1,param_2,8);
        if (iVar4 != 0) goto LAB_00485ae3;
      }
      goto LAB_00485b58;
    }
    iVar4 = setivinv(param_1,param_2,8);
    if (iVar4 == 0) goto LAB_00485b58;
LAB_00485ae3:
    ptr = (void *)(param_2 + 8);
    len = param_5 - 0x18;
    pvVar3 = (void *)(param_4 + 8);
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      pvVar3 = ptr;
    }
    iVar4 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x28))
                      (param_1,param_1 + 0xd5,*(undefined8 *)(param_1 + 0x28),(void *)(param_4 + 8),
                       len,ptr,(long)pvVar3 + len,0x10);
    if (iVar4 == 0) {
      if ((*(byte *)(param_1 + 0x54) & 1) != 0) goto LAB_00485b58;
      OPENSSL_cleanse(ptr,len);
      uVar5 = 0;
      param_5 = 0;
    }
    else {
      uVar5 = 1;
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
        param_5 = len;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
LAB_00485a7c:
  *param_3 = param_5;
  return uVar5;
}

