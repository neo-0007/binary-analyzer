
int CRYPTO_dup_ex_data(int class_index,CRYPTO_EX_DATA *to,CRYPTO_EX_DATA *from)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *val;
  undefined1 *ptr;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 *local_b0;
  void *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)&from->dummy;
  to->sk = from->sk;
  if (lVar1 == 0) {
LAB_00418310:
    iVar3 = 1;
  }
  else {
    puVar5 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
    if ((puVar5 != (undefined8 *)0x0) &&
       (puVar6 = (undefined8 *)get_and_lock(puVar5,class_index), puVar6 != (undefined8 *)0x0)) {
      iVar2 = OPENSSL_sk_num(*puVar6);
      iVar3 = OPENSSL_sk_num(*(undefined8 *)&from->dummy);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      if (0 < iVar3) {
        if (iVar3 < 10) {
          ptr = local_98;
        }
        else {
          ptr = (undefined1 *)CRYPTO_malloc(iVar3 * 8,"../crypto/ex_data.c",299);
          if (ptr == (undefined1 *)0x0) {
            CRYPTO_THREAD_unlock(*puVar5);
            goto LAB_004182a5;
          }
        }
        local_b0 = local_98;
        uVar8 = 0;
        do {
          uVar7 = OPENSSL_sk_value(*puVar6,uVar8 & 0xffffffff);
          *(undefined8 *)(ptr + uVar8 * 8) = uVar7;
          uVar8 = uVar8 + 1;
        } while (uVar8 != (long)iVar3);
        CRYPTO_THREAD_unlock(*puVar5);
        val = CRYPTO_get_ex_data(to,iVar3 + -1);
        uVar8 = 0;
        iVar2 = CRYPTO_set_ex_data(to,iVar3 + -1,val);
        if (iVar2 == 0) {
LAB_00418320:
          iVar3 = 0;
        }
        else {
          do {
            iVar2 = (int)uVar8;
            local_a0 = CRYPTO_get_ex_data(from,iVar2);
            puVar5 = *(undefined8 **)(ptr + uVar8 * 8);
            if (((puVar5 != (undefined8 *)0x0) && ((code *)puVar5[5] != (code *)0x0)) &&
               (iVar4 = (*(code *)puVar5[5])(to,from,&local_a0,uVar8 & 0xffffffff,*puVar5,puVar5[1])
               , iVar4 == 0)) goto LAB_00418320;
            uVar8 = uVar8 + 1;
            CRYPTO_set_ex_data(to,iVar2,local_a0);
          } while ((long)iVar3 != uVar8);
          iVar3 = 1;
        }
        if (ptr != local_b0) {
          CRYPTO_free(ptr);
        }
        goto LAB_004182e2;
      }
      CRYPTO_THREAD_unlock(*puVar5);
      if (iVar3 == 0) goto LAB_00418310;
LAB_004182a5:
      ERR_new();
      ERR_set_debug("../crypto/ex_data.c",0x135,"CRYPTO_dup_ex_data");
      ERR_set_error(0xf,0xc0100,0);
    }
    iVar3 = 0;
  }
LAB_004182e2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

