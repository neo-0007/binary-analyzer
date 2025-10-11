
void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_2 + 0x14) & 0xfffffffe | param_3 | *(uint *)((long)param_1 + 0x14) & 1
       | 2;
  return;
}

