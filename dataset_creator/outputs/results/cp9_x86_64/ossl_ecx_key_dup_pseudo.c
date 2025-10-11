
undefined8 * ossl_ecx_key_dup(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  long lVar3;
  char *pcVar4;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x70,"../crypto/ec/ecx_backend.c",0x6f);
  if (ptr == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecx_backend.c",0x72,"ossl_ecx_key_dup");
    ERR_set_error(0x10,0xc0100,0);
    return (undefined8 *)0x0;
  }
  lVar3 = CRYPTO_THREAD_lock_new();
  ptr[0xd] = lVar3;
  if (lVar3 == 0) {
    CRYPTO_free(ptr);
    return (undefined8 *)0x0;
  }
  bVar1 = *(byte *)(param_1 + 2);
  *ptr = *param_1;
  *(byte *)(ptr + 2) = *(byte *)(ptr + 2) & 0xfe | bVar1 & 1;
  ptr[0xb] = param_1[0xb];
  *(undefined4 *)(ptr + 0xc) = *(undefined4 *)(param_1 + 0xc);
  LOCK();
  *(undefined4 *)((long)ptr + 100) = 1;
  UNLOCK();
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar4 = CRYPTO_strdup((char *)param_1[1],"../crypto/ec/ecx_backend.c",0x83);
    ptr[1] = pcVar4;
    if (pcVar4 == (char *)0x0) goto LAB_00504680;
  }
  if ((param_2 & 2) != 0) {
    uVar2 = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)((long)ptr + 0x11) = *(undefined8 *)((long)param_1 + 0x11);
    *(undefined8 *)((long)ptr + 0x19) = uVar2;
    uVar2 = *(undefined8 *)((long)param_1 + 0x29);
    *(undefined8 *)((long)ptr + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)((long)ptr + 0x29) = uVar2;
    uVar2 = *(undefined8 *)((long)param_1 + 0x39);
    *(undefined8 *)((long)ptr + 0x31) = *(undefined8 *)((long)param_1 + 0x31);
    *(undefined8 *)((long)ptr + 0x39) = uVar2;
    *(undefined8 *)((long)ptr + 0x41) = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined1 *)((long)ptr + 0x49) = *(undefined1 *)((long)param_1 + 0x49);
  }
  if ((param_2 & 1) == 0) {
    return ptr;
  }
  if (param_1[10] == 0) {
    return ptr;
  }
  lVar3 = ossl_ecx_key_allocate_privkey(ptr);
  if (lVar3 != 0) {
    memcpy((void *)ptr[10],(void *)param_1[10],ptr[0xb]);
    return ptr;
  }
LAB_00504680:
  ossl_ecx_key_free(ptr);
  ERR_new();
  ERR_set_debug("../crypto/ec/ecx_backend.c",0x96,"ossl_ecx_key_dup");
  ERR_set_error(0x10,0xc0100,0);
  return (undefined8 *)0x0;
}

