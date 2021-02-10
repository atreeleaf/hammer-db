struct services
{
    CliParser* CliParser;
};

class ServiceFactory {
public:
    ServiceFactory();
    static services createServices();
};
