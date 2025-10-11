
void PEM_proc_type(char *buf,int type)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(buf);
  pcVar2 = "ENCRYPTED";
  if (((type != 10) && (pcVar2 = "MIC-CLEAR", type != 0x1e)) && (pcVar2 = "MIC-ONLY", type != 0x14))
  {
    pcVar2 = "BAD-TYPE";
  }
  BIO_snprintf(buf + sVar1,0x400 - sVar1,"Proc-Type: 4,%s\n",pcVar2);
  return;
}

