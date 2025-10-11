
void CRYPTO_free_ex_data(int class_index,void *obj,CRYPTO_EX_DATA *ad)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined8 *local_108;
  undefined8 local_e8 [21];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)ossl_lib_ctx_get_ex_data_global(ad->sk);
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)get_and_lock(puVar3,class_index), puVar4 != (undefined8 *)0x0)) {
    uVar2 = OPENSSL_sk_num(*puVar4);
    if ((int)uVar2 < 1) {
      CRYPTO_THREAD_unlock(*puVar3);
      local_108 = (undefined8 *)0x0;
    }
    else {
      local_108 = local_e8;
      if (((int)uVar2 < 10) ||
         (local_108 = (undefined8 *)CRYPTO_malloc(uVar2 << 4,"../crypto/ex_data.c",0x181),
         local_108 != (undefined8 *)0x0)) {
        uVar1 = 0;
        puVar10 = local_108;
        do {
          uVar9 = uVar1;
          uVar5 = OPENSSL_sk_value(*puVar4,uVar9);
          *(int *)(puVar10 + 1) = (int)uVar9;
          uVar8 = (int)uVar9 + 1;
          *puVar10 = uVar5;
          uVar1 = (ulong)uVar8;
          puVar10 = puVar10 + 2;
        } while (uVar8 != uVar2);
        CRYPTO_THREAD_unlock(*puVar3);
        piVar7 = (int *)(local_108 + 1);
        qsort(local_108,(long)(int)uVar2,0x10,ex_callback_compare);
        do {
          puVar3 = *(undefined8 **)(piVar7 + -2);
          if ((puVar3 != (undefined8 *)0x0) && (puVar3[4] != 0)) {
            pvVar6 = CRYPTO_get_ex_data(ad,*piVar7);
            (*(code *)puVar3[4])(obj,pvVar6,ad,*piVar7,*puVar3,puVar3[1]);
          }
          piVar7 = piVar7 + 4;
        } while (piVar7 != (int *)(local_108 + uVar9 * 2 + 3));
        if (local_108 == local_e8) goto LAB_004184f1;
      }
      else {
        CRYPTO_THREAD_unlock(*puVar3);
      }
    }
    CRYPTO_free(local_108);
  }
LAB_004184f1:
  OPENSSL_sk_free(*(undefined8 *)&ad->dummy);
  *(undefined8 *)&ad->dummy = 0;
  ad->sk = (stack_st_void *)0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

