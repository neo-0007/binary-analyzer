
undefined8 read_string(undefined8 param_1,UI_STRING *param_2)

{
  FILE *pFVar1;
  UI_string_types UVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *__s1;
  char *pcVar6;
  
  UVar2 = UI_get_string_type(param_2);
  pFVar1 = tty_out;
  if (UVar2 == UIT_VERIFY) {
    pcVar6 = UI_get0_output_string(param_2);
    __fprintf_chk(tty_out,1,"Verifying - %s",pcVar6);
    fflush(tty_out);
    uVar4 = UI_get_input_flags(param_2);
    uVar5 = read_string_inner(param_1,param_2,uVar4 & 1,1);
    if (0 < (int)uVar5) {
      pcVar6 = UI_get0_test_string(param_2);
      __s1 = UI_get0_result_string(param_2);
      iVar3 = strcmp(__s1,pcVar6);
      uVar5 = 1;
      if (iVar3 != 0) {
        fwrite("Verify failure\n",1,0xf,tty_out);
        fflush(tty_out);
        uVar5 = 0;
      }
    }
  }
  else {
    if (UVar2 == UIT_BOOLEAN) {
      pcVar6 = UI_get0_output_string(param_2);
      fputs(pcVar6,pFVar1);
      pFVar1 = tty_out;
      pcVar6 = UI_get0_action_string(param_2);
      fputs(pcVar6,pFVar1);
      fflush(tty_out);
      uVar4 = UI_get_input_flags(param_2);
      uVar5 = read_string_inner(param_1,param_2,uVar4 & 1,0);
      return uVar5;
    }
    if (UVar2 == UIT_PROMPT) {
      pcVar6 = UI_get0_output_string(param_2);
      fputs(pcVar6,pFVar1);
      fflush(tty_out);
      uVar4 = UI_get_input_flags(param_2);
      uVar5 = read_string_inner(param_1,param_2,uVar4 & 1,1);
      return uVar5;
    }
    uVar5 = 1;
  }
  return uVar5;
}

