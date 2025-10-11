
undefined8 FUN_0060d9c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    FUN_0060d750(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_004ae9e0(param_3,"%*sOnly User Certificates\n",param_4,&DAT_0083e5c2);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    FUN_004ae9e0(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_0083e5c2);
  }
  if (0 < (int)param_2[3]) {
    FUN_004ae9e0(param_3,"%*sIndirect CRL\n",param_4,&DAT_0083e5c2);
  }
  if (param_2[2] != 0) {
    FUN_0060d820(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    FUN_004ae9e0(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_0083e5c2);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    FUN_004ae9e0(param_3,&DAT_0081b49b,param_4,&DAT_0083e5c2);
  }
  return 1;
}

