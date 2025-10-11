
void alg_do_each(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      lVar1 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar3);
      (*(code *)*param_3)(*param_2,*(undefined8 *)(lVar1 + 0x10),param_3[1]);
      iVar3 = iVar4;
    } while (iVar4 != iVar2);
  }
  return;
}

