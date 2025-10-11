
int * OPENSSL_sk_deep_copy(int *param_1,code *param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = (int *)CRYPTO_malloc(0x20,"../crypto/stack/stack.c",0x56);
  if (piVar3 == (int *)0x0) {
LAB_00434bbe:
    ERR_new();
    ERR_set_debug("../crypto/stack/stack.c",0x7b,"OPENSSL_sk_deep_copy");
    ERR_set_error(0xf,0xc0100,0);
    piVar7 = (int *)0x0;
    OPENSSL_sk_free(piVar3);
  }
  else {
    if (param_1 == (int *)0x0) {
      *piVar3 = 0;
      piVar3[4] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)piVar3 = *(undefined8 *)param_1;
      *(undefined8 *)(piVar3 + 2) = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(piVar3 + 6) = uVar2;
      iVar6 = *param_1;
      lVar4 = (long)iVar6;
      if (iVar6 != 0) {
        if (iVar6 < 4) {
          lVar4 = 4;
        }
        piVar3[5] = (int)lVar4;
        lVar4 = CRYPTO_zalloc(lVar4 * 8,"../crypto/stack/stack.c",0x6a);
        *(long *)(piVar3 + 2) = lVar4;
        if (lVar4 != 0) {
          if (*piVar3 < 1) {
            return piVar3;
          }
          lVar4 = 0;
          do {
            iVar6 = (int)lVar4;
            if (*(long *)(*(long *)(param_1 + 2) + lVar4 * 8) != 0) {
              lVar1 = *(long *)(piVar3 + 2);
              lVar5 = (*param_2)();
              *(long *)(lVar4 * 8 + lVar1) = lVar5;
              if (lVar5 == 0) {
                if (iVar6 != 0) {
                  lVar4 = (long)(int)(iVar6 - 1U) << 3;
                  do {
                    if (*(long *)(*(long *)(piVar3 + 2) + lVar4) != 0) {
                      (*param_3)();
                    }
                    lVar4 = lVar4 + -8;
                  } while (((long)iVar6 - (ulong)(iVar6 - 1U)) * 8 + -0x10 != lVar4);
                }
                break;
              }
            }
            lVar4 = lVar4 + 1;
            if (*piVar3 <= (int)lVar4) {
              return piVar3;
            }
          } while( true );
        }
        goto LAB_00434bbe;
      }
    }
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[5] = 0;
    piVar7 = piVar3;
  }
  return piVar7;
}

