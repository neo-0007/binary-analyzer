
void getifaddrs(undefined8 param_1)

{
  int iVar1;
  
  do {
    iVar1 = getifaddrs_internal(param_1);
  } while (iVar1 == -0xb);
  return;
}

