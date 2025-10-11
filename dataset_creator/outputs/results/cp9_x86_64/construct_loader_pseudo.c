
void * construct_loader(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  void *ptr;
  long lVar4;
  int *piVar5;
  
  uVar3 = ossl_provider_libctx(param_2);
  uVar3 = ossl_namemap_stored(uVar3);
  iVar2 = ossl_namemap_add_name(uVar3,0,*param_1);
  if (iVar2 != 0) {
    piVar5 = (int *)param_1[2];
    ptr = (void *)CRYPTO_zalloc(0xd0,"../crypto/store/store_meth.c",0x31);
    if (ptr != (void *)0x0) {
      lVar4 = CRYPTO_THREAD_lock_new();
      *(long *)((long)ptr + 0x88) = lVar4;
      if (lVar4 != 0) {
        *(undefined8 *)((long)ptr + 0x60) = param_2;
        ossl_provider_up_ref(param_2);
        LOCK();
        *(undefined4 *)((long)ptr + 0x80) = 1;
        UNLOCK();
        lVar4 = *(long *)((long)ptr + 0x90);
        *(undefined8 *)((long)ptr + 0x70) = param_1[1];
        uVar3 = param_1[3];
        *(int *)((long)ptr + 0x68) = iVar2;
        *(undefined8 *)((long)ptr + 0x78) = uVar3;
        iVar2 = *piVar5;
        while (iVar2 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar2) {
          case 1:
            if (lVar4 == 0) {
              lVar4 = *(long *)(piVar5 + 2);
              *(long *)((long)ptr + 0x90) = lVar4;
            }
            break;
          case 2:
            if (*(long *)((long)ptr + 0x98) == 0) {
              *(undefined8 *)((long)ptr + 0x98) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 3:
            if (*(long *)((long)ptr + 0xa0) == 0) {
              *(undefined8 *)((long)ptr + 0xa0) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 4:
            if (*(long *)((long)ptr + 0xa8) == 0) {
              *(undefined8 *)((long)ptr + 0xa8) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 5:
            if (*(long *)((long)ptr + 0xb0) == 0) {
              *(undefined8 *)((long)ptr + 0xb0) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 6:
            if (*(long *)((long)ptr + 0xb8) == 0) {
              *(undefined8 *)((long)ptr + 0xb8) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 7:
            if (*(long *)((long)ptr + 0xc0) == 0) {
              *(undefined8 *)((long)ptr + 0xc0) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 8:
            if (*(long *)((long)ptr + 200) == 0) {
              *(undefined8 *)((long)ptr + 200) = *(undefined8 *)(piVar5 + 2);
            }
          }
          piVar1 = piVar5 + 4;
          piVar5 = piVar5 + 4;
                    /* WARNING: This code block may not be properly labeled as switch case */
          iVar2 = *piVar1;
        }
        if ((((lVar4 != 0) || (*(long *)((long)ptr + 0x98) != 0)) &&
            (*(long *)((long)ptr + 0xb0) != 0)) &&
           ((*(long *)((long)ptr + 0xb8) != 0 && (*(long *)((long)ptr + 0xc0) != 0)))) {
          return ptr;
        }
        OSSL_STORE_LOADER_free(ptr);
        ERR_new();
        ERR_set_debug("../crypto/store/store_meth.c",0xe5,"loader_from_algorithm");
        ERR_set_error(0x2c,0x74,0);
        goto LAB_00435620;
      }
    }
    CRYPTO_free(ptr);
  }
LAB_00435620:
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return (void *)0x0;
}

