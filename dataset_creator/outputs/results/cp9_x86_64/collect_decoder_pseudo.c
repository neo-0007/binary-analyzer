
void collect_decoder(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = OSSL_DECODER_get0_provider();
  uVar3 = OSSL_PROVIDER_get0_provider_ctx(uVar3);
  if ((*(byte *)((long)param_2 + 0x14) & 1) != 0) {
    return;
  }
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(code **)(param_1 + 0x68) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x68))(uVar3,*(undefined4 *)(param_2[1] + 0x10));
      if (iVar1 == 0) {
        return;
      }
      lVar5 = *param_2;
    }
    iVar1 = OPENSSL_sk_num(lVar5);
    uVar7 = 0;
    if ((long)iVar1 != 0) {
      do {
        uVar4 = OPENSSL_sk_value(*param_2,uVar7 & 0xffffffff);
        iVar2 = OSSL_DECODER_is_a(param_1,uVar4);
        if (iVar2 != 0) {
          lVar5 = (**(code **)(param_1 + 0x38))(uVar3);
          if (lVar5 != 0) {
            lVar6 = ossl_decoder_instance_new(param_1,lVar5);
            if (lVar6 == 0) {
              (**(code **)(param_1 + 0x40))(lVar5);
              *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) | 1;
              return;
            }
            iVar1 = ossl_decoder_ctx_add_decoder_inst(param_2[1],lVar6);
            if (iVar1 != 0) {
              *(int *)(param_2 + 2) = (int)param_2[2] + 1;
              return;
            }
            ossl_decoder_instance_free(lVar6);
          }
          goto LAB_005097b9;
        }
        uVar7 = uVar7 + 1;
      } while ((long)iVar1 != uVar7);
    }
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xfe;
    return;
  }
LAB_005097b9:
  *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) | 1;
  return;
}

