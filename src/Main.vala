namespace Test
{
   public int main(string[] args)
   {
      int result;
      string date;
      Posix.timeval tv;

      date = "10/Mar/2013:00:00:02.003";

      result = Approxidate.parse(date, out tv);
      if (result == -1)
      {
         error("There was a problem parsing the date.");
      }
      message("Date approximated correctly.");

      return 0;
   }
}
