
void digest_from_name(char *param_1,long *param_2)

{
  char *pcVar1;
  
  if (*param_2 != 0) {
    return;
  }
  pcVar1 = OBJ_NAME_get(param_1,1);
  *param_2 = (long)pcVar1;
  return;
}

