
void ___vfprintf_chk(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  __vfprintf_internal(param_1,param_3,param_4,(0 < param_2) * '\x02');
  return;
}

