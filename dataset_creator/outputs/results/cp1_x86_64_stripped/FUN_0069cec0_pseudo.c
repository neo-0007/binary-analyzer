
undefined8 FUN_0069cec0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_00625160(param_1,param_2 + 7);
  if (*(code **)(*param_2 + 0x10) != FUN_0069c8f0) {
                    /* try { // try from 0069cf16 to 0069cf17 has its CatchHandler @ 0069cf1a */
    (**(code **)(*param_2 + 0x10))(param_2,param_3);
  }
  FUN_006258d0(param_2 + 7,param_3);
  return param_1;
}

